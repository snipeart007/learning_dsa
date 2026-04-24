CXX = g++
CXXFLAGS = -Wall -std=c++17

# First argument after target is treated as the file
FILE := $(word 2, $(MAKECMDGOALS))
TARGET := $(basename $(notdir $(FILE)))
# TARGET := run

# Prevent make from treating the file path as a target
%:
	@:

precompile:
	$(CXX) $(CXXFLAGS) bits/stdc++.h

format:
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make run path/to/file.cpp"; \
		exit 1; \
	fi
	clang-format "$(FILE)" -i

build:
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make run path/to/file.cpp"; \
		exit 1; \
	fi
	$(CXX) $(CXXFLAGS) "$(FILE)" -o "$(TARGET)"

run: build
	./"$(TARGET)"
	@echo 

clean:
	rm -f "$(TARGET)"