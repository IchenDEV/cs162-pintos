#pragma once

/* A struct that represents a list of words. */
struct tokens {
  size_t tokens_length;
  char **tokens;
  size_t buffers_length;
  char **buffers;
};

/* Turn a string into a list of words. */
struct tokens *tokenize(const char *line);

/* How many words are there? */
size_t tokens_get_length(struct tokens *tokens);

/* Get me the Nth word (zero-indexed) */
char *tokens_get_token(struct tokens *tokens, size_t n);

/* Turn tokens into two */
struct tokens *tokens_split(struct tokens *tokens,char* det);

/* Free the memory */
void tokens_destroy(struct tokens *tokens);
