#ifndef __UI_MENUS_PREPRO_H__
#define __UI_MENUS_PREPRO_H__

#include "os_io_seproxyhal.h"

#include "ux.h"

const bagl_element_t * ui_address_prepro(const bagl_element_t *element);
const bagl_element_t * ui_verify_transfer_prepro(const bagl_element_t *element);
const bagl_element_t * ui_verify_start_lease_prepro(const bagl_element_t *element);
const bagl_element_t * ui_verify_cancel_lease_prepro(const bagl_element_t *element);
const bagl_element_t * ui_verify_anchor_prepro(const bagl_element_t *element);
const bagl_element_t * ui_verify_transaction_prepro(const bagl_element_t *element);

#endif
