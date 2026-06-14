#pragma once
#include <tc/ByteData.h>
#include <tc/types.h>

class AesCtrEncryptorUtil
{
  public:
    struct TestVector
    {
        std::string test_name;
        tc::ByteData key;
        tc::ByteData iv;
        uint64_t block_number;
        tc::ByteData plaintext;
        tc::ByteData ciphertext;
    };

    static void
    generateAesCtrTestVectors_Nist(std::vector<AesCtrEncryptorUtil::TestVector> &test_list, size_t key_size);
};
