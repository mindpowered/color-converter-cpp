
colorconverter
==============
Converter to convert between various color systems such as RGB, CIELAB, CMYK, HEX, RGB, and XYZ

![Build Status](https://mindpowered.dev/assets/images/github-badges/build-passing.svg)

Contents
========

* [Source Code and Documentation](#source-code-and-documentation)
* [Licensing](#licensing)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Support](#support)

# Source Code and Documentation
- Source Code: [https://github.com/mindpowered/color-converter-cpp](https://github.com/mindpowered/color-converter-cpp)
- Documentation: [https://mindpowered.github.io/color-converter-cpp](https://mindpowered.github.io/color-converter-cpp)

# Licensing
To obtain a version of this package under the MIT License, follow the instructions to [get a license][purchase]. The MIT License has no restrictions on commercial use and permits reuse within proprietary software.

# Requirements
- Bazel - https://www.bazel.build/
- Haxe 4.1.1
- Neko
- hxcpp - https://lib.haxe.org/p/hxcpp/
- g++


Third-party dependencies may have additional requirements.

# Installation
Add rules to WORKSPACE file ...

```
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
  name = 'maglev',
  remote = 'https://github.com/mindpowered/maglev-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'haxecpp',
  remote = 'https://github.com/mindpowered/haxecpp-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'colorconverter',
  remote = 'https://github.com/mindpowered/color-converter-cpp.git',
  branch = 'master',
)
```

Reference dependency in BUILD file ...

```
    deps = [
        ...
        "@colorconverter//:colorconverter"
        ...
    ],
```


# Usage
```cpp
#include <mindpowered/colorconverter/ColorConverter.h>

auto cc = new ColorConverter();
auto colors = ipt->FromHEX("336699");
delete cc;
```


# Support
We are here to support using this package. If it doesn't do what you're looking for, isn't working, or you just need help, please [Contact us][contact].

There is also a public [Issue Tracker][bugs] available for this package.



[bugs]: https://github.com/mindpowered/color-converter-cpp/issues
[contact]: https://mindpowered.dev/support.html?ref=color-converter-cpp/
[docs]: https://mindpowered.github.io/color-converter-cpp/
[licensing]: https://mindpowered.dev/?ref=color-converter-cpp
[purchase]: https://mindpowered.dev/purchase/
