fs = import('fs')
foreach h : linux_headers
  public_headers += fs.copyfile(h.full_path())
endforeach
