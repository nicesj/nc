#include <nc/nc>
#include <nc/log>

extern "C" {
static void nc_init(void) __attribute__((constructor));
static void nc_fini(void) __attribute__((destructor));
}

void nc_init(void)
{
    DbgPrint("NC library is initialized");
}

void nc_fini(void)
{
    DbgPrint("NC library is finalized");
}
