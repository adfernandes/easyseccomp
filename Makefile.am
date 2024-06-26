bin_PROGRAMS = easyseccomp seccomp-run
noinst_PROGRAMS = sim disassemble seccomp-run

noinst_LIBRARIES = libeasyseccomp.a

sim_SOURCES = src/sim/sim.c src/sim/bpf_filter.c
disassemble_SOURCES = src/disassemble/disassemble.c

seccomp_run_SOURCES = src/seccomp_run.c

easyseccomp_SOURCES = src/main.c
easyseccomp_LDADD = libeasyseccomp.a
libeasyseccomp_a_SOURCES = src/parser.y src/lexer.l src/generator.c src/types.c src/syscall-versions/syscall-versions.c
libeasyseccomp_a_LFLAGS = --header-file=$(abs_builddir)/src/libeasyseccomp_a-lexer.h
libeasyseccomp_a_YFLAGS = -d -Wno-yacc
libeasyseccomp_a_CFLAGS = -I $(abs_srcdir)/src -I $(abs_builddir)/src

src/libeasyseccomp_a-lexer.h: src/libeasyseccomp_a-parser.h
src/generator.c: src/libeasyseccomp_a-lexer.h

LOG_DRIVER = env AM_TAP_AWK='$(AWK)' $(SHELL) $(top_srcdir)/build-aux/tap-driver.sh

TESTS_ENVIRONMENT = PATH=$(PATH):$(abs_builddir)
TESTS = tests/test_simple.bats \
	tests/test_directive.bats \
	tests/test_range.bats \
	tests/test_arch.bats \
	tests/test_args.bats

EXTRA_DIST = COPYING README.md src/errnos.h src/generator.h src/types.h \
	src/syscall-versions/syscall-versions.h src/sim/glue.h src/sim/bpf.h \
	build-aux/tap-driver.sh tests/helpers.bash $(TESTS) \
	src/syscall-versions/generate-all-syscalls.sh \
	src/syscall-versions/generate-c-code.py src/libeasyseccomp_a-lexer.h

update-syscall-versions:
	$(if $(KERNEL_CHECKOUT),, $(error KERNEL_CHECKOUT is not defined))
	$(abs_srcdir)/src/syscall-versions/generate-all-syscalls.sh $(KERNEL_CHECKOUT)

clang-format:
# do not format files that were copied into the source directory.
	git ls-files src tests | grep -E "\\.[hc]" | grep -v src/errnos.h | grep -v src/syscall-versions | xargs clang-format -style=file -i


.PHONY: update-syscall-versions
