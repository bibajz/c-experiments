RM := rm -rf

CC = gcc
# $@ resolves to filename of the target
OUTPUT_OPTIONS = -o $@

.PHONY: clean
clean:
	$(RM) *.out

# $< resolves to filename of the first prerequisite
%.out: %.c
	$(CC) $(OUTPUT_OPTIONS) $<
