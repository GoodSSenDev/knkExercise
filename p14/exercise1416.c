PRAGMA(ident "foo")
//which will trun in to
_Pragma(#ident #"foo")
// this will turn in too
_Pragma("ident" "\"foo\"")
//finally this will turn tooo
#pragma ident "foo"