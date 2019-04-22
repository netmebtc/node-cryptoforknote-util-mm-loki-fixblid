#pragma once

#define CURRENT_TRANSACTION_VERSION 1

enum BLOB_TYPE {
  BLOB_TYPE_CRYPTONOTE  = 0,
  BLOB_TYPE_FORKNOTE1   = 1,
  BLOB_TYPE_FORKNOTE2   = 2,
  BLOB_TYPE_CRYPTONOTE2 = 3, // Masari
  BLOB_TYPE_CRYPTONOTE_RYO = 4, // Ryo
  BLOB_TYPE_CRYPTONOTE_LOKI = 5, // Loki
};

enum POW_TYPE {
  POW_TYPE_NOT_SET     = -1,
  POW_TYPE_CN_ORIGINAL = 0,
  POW_TYPE_CN_V1       = 1, // Monero v7
  POW_TYPE_CN_XTL      = 3,
  POW_TYPE_CN_MSR      = 4,
  POW_TYPE_CN_XAO      = 6,
  POW_TYPE_CN_RTO      = 7,
  POW_TYPE_CN_V2       = 8, // Monero v8
  POW_TYPE_CN_HALF     = 9,
  POW_TYPE_CN_GPU      = 11,
  POW_TYPE_CN_WOW      = 12,
  POW_TYPE_CN_V4       = 13, // Monero cn-R
  POW_TYPE_CN_RWZ      = 14,
  POW_TYPE_CN_ZLS      = 15,
  POW_TYPE_CN_DOUBLE   = 16,

  POW_TYPE_CNLITE_ORIGINAL  = 20,
  POW_TYPE_CNLITE_V1        = 21,

  POW_TYPE_CNHEAVY_ORIGINAL  = 30,
  POW_TYPE_CNHEAVY_XHV       = 31,
  POW_TYPE_CNHEAVY_TUBE      = 32,

  POW_TYPE_CNPICO_TRTL       = 40

};