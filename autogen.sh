#!/bin/sh

set -u
set -e

gtkdocize --copy --docdir doc/reference

mkdir -p m4
autoreconf --install
