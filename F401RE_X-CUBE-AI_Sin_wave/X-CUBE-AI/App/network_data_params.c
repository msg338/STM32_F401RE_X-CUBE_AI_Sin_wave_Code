/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2025-09-26T17:19:02+0900
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[161] = {
  0x3e55ce4a3eae99a0U, 0x3e033b8fbee647f2U, 0xbe878084bc43ba80U, 0x3e406c2ebf00ebf3U,
  0x3f3bfa0e3e9bae0fU, 0xbf0a772dbba44780U, 0x3e3685a83e881532U, 0xbe486d3cbf0770eeU,
  0xbeb47697bf2cba01U, 0xbeb3a72500000000U, 0x0U, 0xbf03b27e00000000U,
  0x3e0ae3fcbf05dea3U, 0x0U, 0xbf233001be94db56U, 0x0U,
  0x3e9164253e81176bU, 0xbebe76653e3c55e2U, 0xbdbcbd20be4ec765U, 0x3e82924fbe7f6fcaU,
  0xbeced26dbddc0388U, 0x3dadf22c3e66fb6eU, 0xbe0f9178bea34c1aU, 0xbec63d9e3eb6c985U,
  0x3ebfaeeb3dc66dbfU, 0xbe00e2893e1de386U, 0xbed99710be5fa466U, 0xbec47a893ebc834fU,
  0x3ed7a4383e7c3a26U, 0xbe66070cbd672540U, 0x3df32d973e6f507cU, 0x3dfa236c3e88fd39U,
  0xbe74089cbe23d29cU, 0xbde56f4cbec3ef6bU, 0xbde95f84be5a6468U, 0xbda1e3a4bea41a60U,
  0xbebd23a1bd6bb6e8U, 0xbd9181c03ea7f529U, 0x3edd5611be8da91cU, 0x3e7911963d912cbcU,
  0x3dba5b4cbebc9c3bU, 0xbece447abe905400U, 0xbe3e7974becba8ccU, 0xbd2b8a683e874f1fU,
  0xbed3be583db93554U, 0x3ec889e1bddc1eb4U, 0x3ea6421d3e8dd8ffU, 0x3e94f33b3e6cb626U,
  0x3e863590be759677U, 0xbecf93edbe1cac42U, 0xbe759384bdb6db8cU, 0x3c52cdacbe200e2eU,
  0x3cd4a65bbe4975caU, 0x3e8cde613e6fce8aU, 0xbe802a4d3ea02bd6U, 0x3cf585c0bd8657e0U,
  0xbf06e8cb3d86289eU, 0xbee140b83ec9c0a9U, 0xbe1b6bd43e3b0006U, 0xbea4bd943d95b53cU,
  0x3e1f8faa3e5786a4U, 0xbedd7b82be152dd4U, 0xbf57b0efbcf1e020U, 0xbea0fb7cbdaa9160U,
  0xbe865725bec8e779U, 0xbf22fba2be242d14U, 0xbde6aea8bd27f6e8U, 0xbf0dce38be1b94ceU,
  0x3ed7fd83bf2445e2U, 0xbe5e33fcbdf73c7cU, 0xbe6fc07fbf14ee78U, 0xbea85dda3e620272U,
  0x3dd13f6bbe8a2ac6U, 0x3ee234d1bebd6132U, 0x3e7df7ee3d9bcebcU, 0x3e8c3cd73eda4a0dU,
  0x3e5af5c03ea61013U, 0xbedb5fe4be8ecc64U, 0x3ee7affc3e16bffeU, 0x3ec24fdd3e75674aU,
  0xbea20821be9f7a8eU, 0xbf17b2f5bc88b370U, 0x3eb4ed993e476ccaU, 0xbec0f82abe9a31b2U,
  0x3effbf2cbf060475U, 0xbe9767a8bdf50cfcU, 0xbf4d4ad1bf4d2ee8U, 0xbd88d0f03dae0dd4U,
  0xbc6a43e03e84ab9fU, 0xbeb989f6be7164f2U, 0xbe387d58bcdaed40U, 0xbe232104be8e7d00U,
  0xbeaabdc73ea8862bU, 0xbe9f1fcebed41ac0U, 0xbeb702373c09dda0U, 0x3e3a8312be917e7bU,
  0x3e004fbabea5dc71U, 0xbe7d53f6be010c54U, 0xbde651e03c885b20U, 0xbc8d6d10bed371e7U,
  0xbdfb753c3e5ed362U, 0xbebedbc63e59609aU, 0xbeade308bbef1580U, 0x3eaa15a1be98bdd8U,
  0xbebf026bbe91643aU, 0xbc624d403d6635c8U, 0xbda631c4bea1712eU, 0xbed909c43eb67a35U,
  0xbe46e29bbd50f698U, 0xbe456e30bdbdf684U, 0x3e893107be9c2190U, 0xbeb18e963dcadcfcU,
  0x3e9c2d003e9eaca8U, 0x3e136a9e3ece120fU, 0x3e99d54d3e9535d9U, 0x3d8014523e2f528eU,
  0x3e32d9ce3ea29a78U, 0x3e59d7ca3ed9ddcfU, 0x3d4e6fa8be7f3a51U, 0x3e53629abe0efa14U,
  0x3eb2bd61bd7ea86dU, 0xbf071bf33dd7df94U, 0xbd54b148be0da50eU, 0x3e1bea583e780edaU,
  0x3e79e4183e3cd09bU, 0xbec7dd333e94379bU, 0xbf172b693e81e7b5U, 0xbe8e26e6be92a815U,
  0xbe8000be3b86a16aU, 0xbe96bab63b926b40U, 0x3ec40163be42b116U, 0x3eb2f3143d1da0a8U,
  0x3ed2dad23ead17a5U, 0x3e6d8196bed7bc7bU, 0xbf0f31d53e52cd58U, 0xbe85db6fbe9ff421U,
  0x3f1524553f18dc19U, 0xba1fdd9abe0bd40cU, 0x3eb07a493cba6fc0U, 0x3ee15d0ebd4303a8U,
  0xbe9ae01f3f0a8a25U, 0xbeb222153ed8bbbfU, 0x3f29a16cbc4279a3U, 0x3e7fb89e3e4b1186U,
  0xbe8b4c6e00000000U, 0x0U, 0x3d83a66d3e070f50U, 0xbd49d8673daadd25U,
  0x3ddc79aeU, 0x0U, 0xbe213552bde91373U, 0xbf32f0c6be88dcabU,
  0xbe543f903e5cb07cU, 0x3ecbdefebe91ef21U, 0x3f373b1cbefc319aU, 0x3e8dcec73fa47902U,
  0x3e00cc783f7a59e4U, 0xbf0986ecbe3e87eeU, 0xbea8b242bde75b63U, 0x3feb24d8bdc683b2U,
  0xbe9e66d1U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

