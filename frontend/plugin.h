#ifndef __PLUGIN_H__
#define __PLUGIN_H__

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(x) (sizeof(x) / sizeof(x[0]))
#endif

#define PLUGIN_DL_BASE 0xfbad0000

enum builtint_plugins_e {
	PLUGIN_GPU,
	PLUGIN_SPU,
	PLUGIN_PAD,
};

void *plugin_link(enum builtint_plugins_e id, const char *sym);
void plugin_call_rearmed_cbs(void);

#endif /* __PLUGIN_H__ */
