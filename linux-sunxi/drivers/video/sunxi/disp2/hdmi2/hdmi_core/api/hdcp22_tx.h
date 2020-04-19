/*
 * Allwinner SoCs hdmi2.0 driver.
 *
 * Copyright (C) 2016 Allwinner.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */
#ifndef __HDCP22_H__
#define __HDCP22_H__

#include <linux/workqueue.h>
int esm_tx_initial(unsigned long esm_hpi_base,
			      u32 code_base,
			      unsigned long vir_code_base,
			      u32 code_size,
			      u32 data_base,
			      unsigned long vir_data_base,
			      u32 data_size);

void esm_tx_exit(void);
int esm_tx_open(void);
void esm_tx_close(void);
void esm_tx_disable(void);
void set_hdcp22_authenticate_and_data_enable(void);
int esm_encrypt_status_check_and_handle(void);
#endif
