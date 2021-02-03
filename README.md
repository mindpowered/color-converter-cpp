
colorconverter
==============
Converter to convert between various color systems such as RGB, CIELAB, CMYK, HEX, RGB, and XYZ

![Build Status](https://mindpowered.dev/assets/images/github-badges/build-passing.svg)

Contents
========

* [Source Code and Documentation](#source-code-and-documentation)
* [About](#about)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Support](#support)
* [Licensing](#licensing)

# Source Code and Documentation
- Source Code: [https://github.com/mindpowered/color-converter-cpp](https://github.com/mindpowered/color-converter-cpp)
- Documentation: [https://mindpowered.github.io/color-converter-cpp](https://mindpowered.github.io/color-converter-cpp)

# About
Defining a color is difficult. The first challenge is finding a way to describe a color. One way is to describe color based on constituent colors. We can describe constituent colors by adding them, like in RGB, or subtracting them, like in CMYK. Gamut is the range of all colors that are representable in a color system. RGB trades a limited gamut for performance. LAB trades performance for the full gamut of visible colors. CMYK represents the gamut used in color printing.

The second challenge to defining a color is that it depends on the observer. Viewing the same color will look different when:
- printed on paper or displayed on a screen
- seen in daylight or under fluorescent lighting
- positioned at a close or far distance
Standard references such as the Pantone Matching System refer to specific colors. We lose information when converting from a reference color to a color system. Printing or rendering an RGB or CMYK color equivalent to a reference color may not match. We can avoid information loss during conversion by using an unlimited gamut such as LAB. We must also take into account the effect of the observer and illumination.

This package aims to provide tools to perform:
- Color conversion between color systems
- A way of searching for similar standardized reference colors

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
auto colors = cc->FromHEX("336699");
delete cc;
```


# Support
We are here to support using this package. If it doesn't do what you're looking for, isn't working, or you just need help, please [Contact us][contact].

There is also a public [Issue Tracker][bugs] available for this package.

# Licensing
This package is released under the MIT License.



[bugs]: https://github.com/mindpowered/color-converter-cpp/issues
[contact]: https://mindpowered.dev/support/?ref=color-converter-cpp/
[docs]: https://mindpowered.github.io/color-converter-cpp/
[licensing]: https://mindpowered.dev/?ref=color-converter-cpp
[purchase]: https://mindpowered.dev/purchase/
