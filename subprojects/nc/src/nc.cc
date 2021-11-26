#include <nc/nc>
#include <nc/log>

extern "C" {
static void nc_init(void) __attribute__((constructor));
static void nc_fini(void) __attribute__((destructor));
}

void nc_init(void)
{
    InfoPrint("Hello World");
}

void nc_fini(void)
{
    InfoPrint("Good bye World");
}
