/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */ 
#include "../demo.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * main
 */ 
tb_int_t tb_demo_memory_queue_buffer_main(tb_int_t argc, tb_char_t** argv)
{
	tb_char_t 		d[1024];
	tb_queue_buffer_t 	b;
	tb_queue_buffer_init(&b, 1024);

	tb_queue_buffer_writ(&b, "hello", 5);
	tb_queue_buffer_writ(&b, " ", 1);
	tb_queue_buffer_writ(&b, "world", 6);
	tb_queue_buffer_read(&b, d, 1024);
	tb_trace_i("%s", d);

	tb_queue_buffer_exit(&b);

	return 0;
}
