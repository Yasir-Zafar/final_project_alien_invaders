{
  description = "A basic flake with a shell";
  inputs = {
    nixpkgs = {
      url = "github:nixos/nixpkgs/nixos-unstable";

    };
    utils = {
      url = "github:numtide/flake-utils";
    };
  };

  outputs = { self, nixpkgs, utils, ... }:
    utils.lib.eachDefaultSystem (
      system:
      let
        p = import nixpkgs { inherit system; };
        llvm = p.llvmPackages_latest;
      in {
        devShell = p.mkShell.override { stdenv = p.clangStdenv; } rec {
          packages = with p; [
            # builder
            gnumake
            cmake

            # debugger

            # fix headers not found
            clang-tools_16

            # LSP and compiler
            llvm.libstdcxxClang

            # other tools
            llvm.libllvm

            # stdlib for cpp
            llvm.libcxx

            # libs
            sfml
          ];
          name = "C";
        };
      }
    );
}
