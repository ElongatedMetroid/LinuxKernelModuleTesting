#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_AUTHOR("Nate");
MODULE_DESCRIPTION("Printk Log Levels LKM");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");

static int __init printk_log_levels_init(void) {
  pr_emerg("Hello. World from log-level KERN_EMERG  [0]\n");
  pr_alert("Hello. World from log-level KERN_ALERT  [1]\n");
  pr_crit("Hello. World from log-level KERN_CRIT  [2]\n");
  pr_err("Hello. World from log-level KERN_ERR  [3]\n");
  pr_warn("Hello. World from log-level KERN_WARN  [4]\n");
  pr_notice("Hello. World from log-level KERN_NOTICE  [5]\n");
  pr_info("Hello. World from log-level KERN_INFO  [6]\n");
  pr_debug("Hello. World from log-level KERN_DEBUG  [7]\n");
  
  pr_devel("Hello. World from the pr_devel macro" "(eff @KERN_DEBUG)\n");
  return 0;
}

static void __exit printk_log_levels_exit(void) {
  pr_info("NOooooooOOOOooooo why did oyu remove me from kernel memorhy!!!1111!!!!");
}

module_init(printk_log_levels_init);
module_exit(printk_log_levels_exit);
