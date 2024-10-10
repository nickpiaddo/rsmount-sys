# rsmount-sys

![Crates.io License](https://img.shields.io/crates/l/rsmount-sys?labelColor=%23222222&color=%230d0887)
![Crates.io MSRV](https://img.shields.io/crates/msrv/rsmount-sys?labelColor=%23222222&color=%239c179e)

----

Raw Rust FFI bindings to the [`util-linux/libmount`][1] C library.

----

## Supported library version

This crate requires `libmount` version `2.39.2` or later.

## Build dependencies

To build this crate, install the following packages in addition to the [Rust
toolchain][4].

- `util-linux`: to generate Rust bindings from `libfdisk`'s header files.
- `libclang`: to satisfy the [dependency][2] of [`bindgen`][3] on `libclang`.
- `pkg-config`: to detect system libraries.

### NixOS

Temporarily install the required packages with:

```console
nix-shell -p util-linux.dev libclang.lib pkg-config
```

or permanently with:

```console
nix-env -iA nixos.util-linux.dev nixos.libclang.lib nixos.pkg-config
```

### Alpine Linux

As `root`, issue the following command:

```console
apk add util-linux-dev clang-libclang pkgconfig
```

### Ubuntu

```console
sudo apt-get install libmount-dev libclang-dev pkg-config
```

## License

Copyright (c) 2023 Nick Piaddo

SPDX-License-Identifier: Apache-2.0 OR MIT

[1]: https://github.com/util-linux/util-linux/tree/master
[2]: https://rust-lang.github.io/rust-bindgen/requirements.html#clang
[3]: https://crates.io/crates/bindgen
[4]: https://www.rust-lang.org/tools/install
