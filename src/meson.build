sources = [
  'bpf.c',
  'btf.c',
  'libbpf.c',
  'libbpf_utils.c',
  'netlink.c',
  'nlattr.c',
  'libbpf_probes.c',
  'bpf_prog_linfo.c',
  'btf_dump.c',
  'hashmap.c',
  'ringbuf.c',
  'strset.c',
  'linker.c',
  'gen_loader.c',
  'relo_core.c',
  'usdt.c',
  'zip.c',
  'elf.c',
  'features.c',
  'btf_iter.c',
  'btf_relocate.c',
]

install_headers(bpf_headers, subdir: 'bpf')

libbpf = library('bpf', sources,
  include_directories: internal_incdirs,
  dependencies: [libelf_dep, zlib_dep],
  install: true,
)
libbpf_dep = declare_dependency(
  sources: public_headers,
  include_directories: public_incdirs,
  link_with: libbpf,
)
meson.override_dependency('libbpf', libbpf_dep)

pkg = import('pkgconfig')
pkg.generate(libbpf,
  filebase: 'libbpf',
  name: 'libbpf',
  description: 'BPF library',
)
