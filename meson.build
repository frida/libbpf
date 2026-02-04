project('libbpf', 'c',
  version: '1.7.0',
  meson_version: '>=1.4.0',
)

cc = meson.get_compiler('c')

libelf_dep = dependency('libelf')
zlib_dep = dependency('zlib')

public_incdirs = include_directories(
  'include' / 'public',
)
internal_incdirs = include_directories(
  'include',
  'include' / 'uapi',
)

if get_option('default_library') != 'static'
  add_project_arguments('-DSHARED=1', language: 'c')
endif

subdir('include')
subdir('src')
