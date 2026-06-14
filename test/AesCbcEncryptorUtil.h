#pragma once
#include <tc/ByteData.h>
#include <tc/types.h>

class AesCbcEncryptorUtil
{
  public:
    struct TestVector
    {
        std::string test_name;
        tc::ByteData key;
        tc::ByteData iv;
        tc::ByteData plaintext;
        tc::ByteData ciphertext;
    };

    static void
    generateAesCbcTestVectors_Nist(std::vector<AesCbcEncryptorUtil::TestVector> &test_list, size_t key_size);
};
