//
// Created by yuandu on 24-10-26.
//

#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>

#include "common.h"

constexpr auto BUFFER_SIZE = 1024 * 1024;

int main(const int argc, const char *argv[]) {
  // check the number of the input arguments
  if (argc == 1) {
    // TODO: run repl
    printf("no argument\n");
  } else if (argc == 2) {
    // TODO: run file
    // get the first argument as the file path
    const auto file_path = argv[1];

    FILE *file_stream = nullptr;
    if (fopen_s(&file_stream, file_path, "rb") != 0) {
      printf("Error opening file: %s\n", file_path);
      exit(1);
    }

    if (file_stream == nullptr) {
      printf("Error opening file\n");
      exit(1);
    }

    char buffer[BUFFER_SIZE] = {};
    fread_s(buffer, BUFFER_SIZE, 1, BUFFER_SIZE - 1, file_stream);
    fclose(file_stream);

    // TODO: process file content
  } else {
    printf("Usage: clox [script]\n");
    exit(64);
  }

  return 0;
}
