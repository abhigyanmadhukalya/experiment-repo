# Important Functions

## strlwr: Lowercase string

```c
char *strlwr(char *s) {
  char *tmp = s;
  for (; *tmp; ++tmp) {
    *tmp = tolower((unsigned char)*tmp);
  }
  return s;
}
```

## strupr: Uppercase String

```c
char *strupr(char *s) {
  char *tmp = s;
  for (; *tmp; ++tmp) {
    *tmp = toupper((unsigned char)*tmp);
  }
  return s;
}
```
