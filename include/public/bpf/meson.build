bpf_headers = [
  'bpf.h',
  'libbpf.h',
  'btf.h',
  'libbpf_common.h',
  'libbpf_legacy.h',
  'bpf_helpers.h',
  'bpf_helper_defs.h',
  'bpf_tracing.h',
  'bpf_endian.h',
  'bpf_core_read.h',
  'skel_internal.h',
  'libbpf_version.h',
  'usdt.bpf.h',
]

fs = import('fs')
foreach h : bpf_headers
  public_headers += fs.copyfile(meson.project_source_root() / 'src' / h)
endforeach
