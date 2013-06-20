#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x14522340, "module_layout" },
	{ 0x806e575f, "kmem_cache_destroy" },
	{ 0xe90dcae0, "__request_module" },
	{ 0x4f1939c7, "per_cpu__current_task" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe23d7acb, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x5b43af61, "dm_get_device" },
	{ 0x92168ecd, "dm_io" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0xe0ce9d5e, "dm_table_get_mode" },
	{ 0x973873ab, "_spin_lock" },
	{ 0xbf10811a, "dm_kcopyd_client_destroy" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0x7ef6ef76, "queue_work" },
	{ 0xc79bcd36, "dm_vcalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x9598d229, "dm_register_target" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0xa7006f51, "dm_kcopyd_copy" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x343a1a8, "__list_add" },
	{ 0xb4b0ee4e, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x45ddfc6, "dm_io_client_destroy" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xc80dfc76, "dm_table_event" },
	{ 0xde0bdcff, "memset" },
	{ 0xfe0672d8, "dm_set_target_max_io_len" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xea147363, "printk" },
	{ 0xecde1418, "_spin_lock_irq" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0x6664e62d, "dm_unregister_target" },
	{ 0x85f8a266, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x7329e40d, "kmem_cache_free" },
	{ 0x6dcaeb88, "per_cpu__kernel_stack" },
	{ 0x20f26c14, "destroy_workqueue" },
	{ 0x521445b, "list_del" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x77bed697, "dm_suspended" },
	{ 0xd5ed5307, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x9c14f8c3, "__create_workqueue_key" },
	{ 0xd851af78, "up_write" },
	{ 0x45d55543, "down_write" },
	{ 0x21c9ef83, "flush_workqueue" },
	{ 0x4c75ad64, "bio_endio" },
	{ 0xcbd81171, "module_put" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xee065ced, "kmem_cache_alloc" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0x4b73a443, "dm_kcopyd_client_create" },
	{ 0xfdfc0b3b, "fiemap_fill_next_extent" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0x2044fa9e, "kmem_cache_alloc_trace" },
	{ 0xa56f1315, "mempool_free" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0x642e54ac, "__wake_up" },
	{ 0xa0ceef51, "out_of_line_wait_on_bit" },
	{ 0xc0c91be8, "dm_io_client_create" },
	{ 0x9b79a9aa, "dm_kcopyd_prepare_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0x21e270b3, "dm_table_get_size" },
	{ 0x995f3c13, "dm_put_device" },
	{ 0x9edbecae, "snprintf" },
	{ 0x4b5fd49e, "dm_kcopyd_do_callback" },
	{ 0x3302b500, "copy_from_user" },
	{ 0xa2b8a2ba, "__init_rwsem" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "944F8F0F639DEF58AB7F30C");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 4,
};
