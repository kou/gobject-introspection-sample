# GObject Introspection sample

This is a sample C project that uses
[GObject Introspection](https://wiki.gnome.org/Projects/GObjectIntrospection).

## How to build

```
% ./autogen.sh
% ./configure --enable-gtk-doc --prefix=/tmp/local
% make
% make install
```

You can find Sample-1.0.typelib generated by GObject Introspection in
/tmp/local/lib/girepository-1.0/.

## License

[CC0 (Public Domain)](http://creativecommons.org/publicdomain/zero/1.0/deed)
