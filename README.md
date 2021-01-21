
colorconverter
==============

Contents
========

* [Source Code and Documentation](#source-code-and-documentation)
* [Licensing](#licensing)
* [Requirements](#requirements)
* [Installation](#installation)
* [Support](#support)

# Source Code and Documentation
- Source Code: [https://github.com/mindpowered/color-converter-cpp](https://github.com/mindpowered/color-converter-cpp)
- Documentation: [https://mindpowered.github.io/color-converter-cpp](https://mindpowered.github.io/color-converter-cpp)

# Licensing
This package is dual-licensed under the MIT and CPAL-1.0 licenses.

To obtain a version licensed under the MIT License, follow the instructions at [get a license][purchase].

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


# Support
We are here to support using this package. If it doesn't do what you're looking for, isn't working, or you just need help, please [Contact us][contact].

There is also a public [Issue Tracker][bugs] available for this package.
  
  
![Documentation - CPP README - color-converter](https://www.google-analytics.com/collect?v=1&tid=UA-178768904-1&cid=555&aip=1&t=event&ec=Documentation&ea=CPP+README&el=color-converter)


[bugs]: https://github.com/mindpowered/color-converter-cpp/issues
[contact]: https://mindpowered.dev/support.html?ref=color-converter-cpp/
[licensing]: https://mindpowered.dev/?ref=color-converter-cpp
[purchase]: https://mindpowered.dev/purchase/color-converter-cpp
