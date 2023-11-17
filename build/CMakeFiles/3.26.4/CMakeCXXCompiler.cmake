set(CMAKE_CXX_COMPILER "/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/clang++")
set(CMAKE_CXX_COMPILER_ARG1 "")
set(CMAKE_CXX_COMPILER_ID "Clang")
set(CMAKE_CXX_COMPILER_VERSION "16.0.6")
set(CMAKE_CXX_COMPILER_VERSION_INTERNAL "")
set(CMAKE_CXX_COMPILER_WRAPPER "")
set(CMAKE_CXX_STANDARD_COMPUTED_DEFAULT "17")
set(CMAKE_CXX_EXTENSIONS_COMPUTED_DEFAULT "ON")
set(CMAKE_CXX_COMPILE_FEATURES "cxx_std_98;cxx_template_template_parameters;cxx_std_11;cxx_alias_templates;cxx_alignas;cxx_alignof;cxx_attributes;cxx_auto_type;cxx_constexpr;cxx_decltype;cxx_decltype_incomplete_return_types;cxx_default_function_template_args;cxx_defaulted_functions;cxx_defaulted_move_initializers;cxx_delegating_constructors;cxx_deleted_functions;cxx_enum_forward_declarations;cxx_explicit_conversions;cxx_extended_friend_declarations;cxx_extern_templates;cxx_final;cxx_func_identifier;cxx_generalized_initializers;cxx_inheriting_constructors;cxx_inline_namespaces;cxx_lambdas;cxx_local_type_template_args;cxx_long_long_type;cxx_noexcept;cxx_nonstatic_member_init;cxx_nullptr;cxx_override;cxx_range_for;cxx_raw_string_literals;cxx_reference_qualified_functions;cxx_right_angle_brackets;cxx_rvalue_references;cxx_sizeof_member;cxx_static_assert;cxx_strong_enums;cxx_thread_local;cxx_trailing_return_types;cxx_unicode_literals;cxx_uniform_initialization;cxx_unrestricted_unions;cxx_user_literals;cxx_variadic_macros;cxx_variadic_templates;cxx_std_14;cxx_aggregate_default_initializers;cxx_attribute_deprecated;cxx_binary_literals;cxx_contextual_conversions;cxx_decltype_auto;cxx_digit_separators;cxx_generic_lambdas;cxx_lambda_init_captures;cxx_relaxed_constexpr;cxx_return_type_deduction;cxx_variable_templates;cxx_std_17;cxx_std_20;cxx_std_23")
set(CMAKE_CXX98_COMPILE_FEATURES "cxx_std_98;cxx_template_template_parameters")
set(CMAKE_CXX11_COMPILE_FEATURES "cxx_std_11;cxx_alias_templates;cxx_alignas;cxx_alignof;cxx_attributes;cxx_auto_type;cxx_constexpr;cxx_decltype;cxx_decltype_incomplete_return_types;cxx_default_function_template_args;cxx_defaulted_functions;cxx_defaulted_move_initializers;cxx_delegating_constructors;cxx_deleted_functions;cxx_enum_forward_declarations;cxx_explicit_conversions;cxx_extended_friend_declarations;cxx_extern_templates;cxx_final;cxx_func_identifier;cxx_generalized_initializers;cxx_inheriting_constructors;cxx_inline_namespaces;cxx_lambdas;cxx_local_type_template_args;cxx_long_long_type;cxx_noexcept;cxx_nonstatic_member_init;cxx_nullptr;cxx_override;cxx_range_for;cxx_raw_string_literals;cxx_reference_qualified_functions;cxx_right_angle_brackets;cxx_rvalue_references;cxx_sizeof_member;cxx_static_assert;cxx_strong_enums;cxx_thread_local;cxx_trailing_return_types;cxx_unicode_literals;cxx_uniform_initialization;cxx_unrestricted_unions;cxx_user_literals;cxx_variadic_macros;cxx_variadic_templates")
set(CMAKE_CXX14_COMPILE_FEATURES "cxx_std_14;cxx_aggregate_default_initializers;cxx_attribute_deprecated;cxx_binary_literals;cxx_contextual_conversions;cxx_decltype_auto;cxx_digit_separators;cxx_generic_lambdas;cxx_lambda_init_captures;cxx_relaxed_constexpr;cxx_return_type_deduction;cxx_variable_templates")
set(CMAKE_CXX17_COMPILE_FEATURES "cxx_std_17")
set(CMAKE_CXX20_COMPILE_FEATURES "cxx_std_20")
set(CMAKE_CXX23_COMPILE_FEATURES "cxx_std_23")

set(CMAKE_CXX_PLATFORM_ID "Linux")
set(CMAKE_CXX_SIMULATE_ID "")
set(CMAKE_CXX_COMPILER_FRONTEND_VARIANT "GNU")
set(CMAKE_CXX_SIMULATE_VERSION "")




set(CMAKE_AR "/nix/store/g63695j29xm63699c4zjfljfv24csw5b-llvm-16.0.6/bin/llvm-ar")
set(CMAKE_CXX_COMPILER_AR "/nix/store/g63695j29xm63699c4zjfljfv24csw5b-llvm-16.0.6/bin/llvm-ar")
set(CMAKE_RANLIB "/nix/store/g63695j29xm63699c4zjfljfv24csw5b-llvm-16.0.6/bin/llvm-ranlib")
set(CMAKE_CXX_COMPILER_RANLIB "/nix/store/g63695j29xm63699c4zjfljfv24csw5b-llvm-16.0.6/bin/llvm-ranlib")
set(CMAKE_LINKER "/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/bin/ld")
set(CMAKE_MT "")
set(CMAKE_COMPILER_IS_GNUCXX )
set(CMAKE_CXX_COMPILER_LOADED 1)
set(CMAKE_CXX_COMPILER_WORKS TRUE)
set(CMAKE_CXX_ABI_COMPILED TRUE)

set(CMAKE_CXX_COMPILER_ENV_VAR "CXX")

set(CMAKE_CXX_COMPILER_ID_RUN 1)
set(CMAKE_CXX_SOURCE_FILE_EXTENSIONS C;M;c++;cc;cpp;cxx;m;mm;mpp;CPP;ixx;cppm)
set(CMAKE_CXX_IGNORE_EXTENSIONS inl;h;hpp;HPP;H;o;O;obj;OBJ;def;DEF;rc;RC)

foreach (lang C OBJC OBJCXX)
  if (CMAKE_${lang}_COMPILER_ID_RUN)
    foreach(extension IN LISTS CMAKE_${lang}_SOURCE_FILE_EXTENSIONS)
      list(REMOVE_ITEM CMAKE_CXX_SOURCE_FILE_EXTENSIONS ${extension})
    endforeach()
  endif()
endforeach()

set(CMAKE_CXX_LINKER_PREFERENCE 30)
set(CMAKE_CXX_LINKER_PREFERENCE_PROPAGATES 1)

# Save compiler ABI information.
set(CMAKE_CXX_SIZEOF_DATA_PTR "8")
set(CMAKE_CXX_COMPILER_ABI "ELF")
set(CMAKE_CXX_BYTE_ORDER "LITTLE_ENDIAN")
set(CMAKE_CXX_LIBRARY_ARCHITECTURE "")

if(CMAKE_CXX_SIZEOF_DATA_PTR)
  set(CMAKE_SIZEOF_VOID_P "${CMAKE_CXX_SIZEOF_DATA_PTR}")
endif()

if(CMAKE_CXX_COMPILER_ABI)
  set(CMAKE_INTERNAL_PLATFORM_ABI "${CMAKE_CXX_COMPILER_ABI}")
endif()

if(CMAKE_CXX_LIBRARY_ARCHITECTURE)
  set(CMAKE_LIBRARY_ARCHITECTURE "")
endif()

set(CMAKE_CXX_CL_SHOWINCLUDES_PREFIX "")
if(CMAKE_CXX_CL_SHOWINCLUDES_PREFIX)
  set(CMAKE_CL_SHOWINCLUDES_PREFIX "${CMAKE_CXX_CL_SHOWINCLUDES_PREFIX}")
endif()





set(CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES "/nix/store/rzqd859mqsxq4w32lzgbmwlv68sxwwmw-gnumake-4.4.1/include;/nix/store/83kzd56a6f84lnlvvvz8piq91vz2rg0x-gdb-13.2/include;/nix/store/wf28d8f33wfigf5q5cvjibdb9qn4s6p1-llvm-16.0.6-dev/include;/nix/store/2kridj093jlhc9x1y5nvn4j35lgigzid-ncurses-6.4-dev/include;/nix/store/686lhcz4bwg3wk09pi1xxjgzbxv7ys5q-zlib-1.3-dev/include;/nix/store/fpbzmlglgknv41q3hl9402hdwm1sg3dq-libcxx-16.0.6-dev/include;/nix/store/cinsvr42pxxc1ckxm1dkyqy5a8ayjkvy-sfml-2.5.1/include;/nix/store/1ml7l4qxmlpj131947j502k6jxnvc3ni-glm-0.9.9.8/include;/nix/store/mivm6y22x6dkbzbwjf0wgn8whx7y3znd-SDL2-2.28.3-dev/include;/nix/store/a8wxmz6hcvlpb44z3kf19mzcgak5zqlm-xorgproto-2023.2/include;/nix/store/843sjip7qjsjq412rdhpb035vm93hg6w-libGL-1.6.0-dev/include;/nix/store/3ggcnykapn5ks74b4f7470n79444fwyr-libX11-1.8.7-dev/include;/nix/store/qy1mf9h5yr21h2rdw7makccivzlhi5cs-libxcb-1.16-dev/include;/nix/store/zr03ws486l4ircyasq37x681bqvmyb5v-SDL2_gfx-1.0.4/include;/nix/store/kl44jcmbbvylyjz0379bkc7fykk3cspg-compiler-rt-libc-16.0.6-dev/include;/nix/store/4gizkwxrx9q7cr88vz1n2v6nlz4645fb-compiler-rt-libc-11.1.0-dev/include;/nix/store/0b9bsznqs6pdg42dxcwvrlmarjn2p6a1-gcc-12.3.0/include/c++/12.3.0;/nix/store/0b9bsznqs6pdg42dxcwvrlmarjn2p6a1-gcc-12.3.0/include/c++/12.3.0/x86_64-unknown-linux-gnu;/nix/store/i80k2s7lczrgr7s0dqlh1g9hhbc7gknj-clang-wrapper-16.0.6/resource-root/include;/nix/store/x8lqlydsxbrwvf6p7v18gws8kn1xl37f-glibc-2.38-23-dev/include")
set(CMAKE_CXX_IMPLICIT_LINK_LIBRARIES "stdc++;m;gcc_s;gcc;c;gcc_s;gcc")
set(CMAKE_CXX_IMPLICIT_LINK_DIRECTORIES "/nix/store/83kzd56a6f84lnlvvvz8piq91vz2rg0x-gdb-13.2/lib;/nix/store/qzrp68dizk4fsiab5cfscv1ja00h5frn-ncurses-6.4/lib;/nix/store/s5gzrzha72q79v92wqq61x9ir8xiwbxk-zlib-1.3/lib;/nix/store/n7pschsy9w8ncwkphpz7w3hi2y99gd9a-llvm-16.0.6-lib/lib;/nix/store/xaaa4q431p38aq9ricc4xz102zdfwj88-libcxx-16.0.6/lib;/nix/store/cinsvr42pxxc1ckxm1dkyqy5a8ayjkvy-sfml-2.5.1/lib;/nix/store/hfdqivgjr86fimxs44khhr7ai2kqk893-libGL-1.6.0/lib;/nix/store/3nbvki8kpyni8nq8q6dbzhrmrpgcbvyz-libglvnd-1.6.0/lib;/nix/store/aw8hfaawrydmglj5i1zg39jskn8y1d4p-libxcb-1.16/lib;/nix/store/b6yspa0filw7fvfabbjfpi2z5k4igv1a-libX11-1.8.7/lib;/nix/store/37hivlvicbl28aqk94zsdqdmfzk7cdd0-SDL2-2.28.3/lib;/nix/store/zr03ws486l4ircyasq37x681bqvmyb5v-SDL2_gfx-1.0.4/lib;/nix/store/gqghjch4p1s69sv4mcjksb2kb65rwqjy-glibc-2.38-23/lib;/nix/store/0b9bsznqs6pdg42dxcwvrlmarjn2p6a1-gcc-12.3.0/lib/gcc/x86_64-unknown-linux-gnu/12.3.0;/nix/store/9fy9zzhf613xp0c3jsjxbjq6yp8afrsv-gcc-12.3.0-lib/lib;/nix/store/0b9bsznqs6pdg42dxcwvrlmarjn2p6a1-gcc-12.3.0/lib;/nix/store/1q6qwq8csbhyy0pv54sab00jxlmb3rw2-gcc-12.3.0-libgcc/lib;/nix/store/drdgnjs122bi20j9in11ghbwfavasf06-clang-16.0.6-lib/lib;/nix/store/0b9bsznqs6pdg42dxcwvrlmarjn2p6a1-gcc-12.3.0/lib64/gcc/x86_64-unknown-linux-gnu/12.3.0;/nix/store/0b9bsznqs6pdg42dxcwvrlmarjn2p6a1-gcc-12.3.0/lib64")
set(CMAKE_CXX_IMPLICIT_LINK_FRAMEWORK_DIRECTORIES "")
