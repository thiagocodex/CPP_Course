#pragma once
static char* currentLocale = setlocale(LC_ALL, "");

static int localeInfo = printf("%s\n\n", currentLocale);
