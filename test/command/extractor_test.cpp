#include "gtest/gtest.h"
#include "command/extractor.h"
class ExtractorTest : public ::testing::Test {
    protected:
        ExtractorTest() {

        }
        virtual ~ExtractorTest() {

        }
        virtual void SetUp() {

        }
        virtual void TearDown() {

        }
};

TEST_F(ExtractorTest, TestCanCreateExtractor) {
    Command::Extractor *extractor = new Command::Extractor();
}
