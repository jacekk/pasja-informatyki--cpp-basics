.DEFAULT_GOAL := help

_PWD := $(shell pwd)

help:
	@grep '^[^#_\.[:space:]].*:' Makefile | tr -d ':'

clean: clean-codeblocks clean-vscode

clean-codeblocks:
	find . -type d -name "bin" | xargs rm -rf
	find . -type d -name "obj" | xargs rm -rf
	find . -type f -name "*.depend" | xargs rm -f
	find . -type f -name "*.layout" | xargs rm -f

clean-vscode:
	find . -type f -name "*.out" | xargs rm -f
