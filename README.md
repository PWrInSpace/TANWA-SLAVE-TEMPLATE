# TANWA SLAVE TEMPLATE

TANWA - filling, weighting, pressurizing and igniting system slave node template:

## POINTS TO CHANGE:

* console config - edit commands in ***console_config.c*** file
* TWAI (CAN) bus filter - edit **TWAI_ACCEPTANCE_FILTER** and **TWAI_ACCEPTANCE_MASK** in ***Kconfig.projbuild*** file 
* add hardware libraries, and hardware initialization in ***board_config.c*** and ***board_config.h*** files
* add CAN message parsing in ***can_commands.c***
* add functionality task/tasks
* likely, add macros for twai struct creation
* add configurations in existing files or add files specific for functionality (e.g. built-in adc configuration, spi configuration, etc...)

## CAN TASK USAGE:

There is a public function available to use: ***can_send_message***. It sends can message with specified id, payload and payload length. It can be used from any task.

For recieving, every message id should have its own assigned callback, callbacks are registered using ***can_register_commands*** function. Callbacks are executed in the CAN listening task. There is no need for a separate task since, there exists an internal RX queue built in the twai driver.
