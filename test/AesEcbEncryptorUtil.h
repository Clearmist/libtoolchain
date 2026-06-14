#pragma once
#include <tc/ByteData.h>
#include <tc/types.h>

class AesEcbEncryptorUtil
{
  public:
    struct TestVector
    {
        std::string test_name;
        tc::ByteData key;
        tc::ByteData plaintext;
        tc::ByteData ciphertext;
    };

    static void
    generateAesEcbTestVectors_Nist(std::vector<AesEcbEncryptorUtil::TestVector> &test_list, size_t key_size);
};
