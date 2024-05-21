#include "Logger.h"

using namespace Logging;

FileLogger::FileLogger(String^ filePath, bool append)
    : LogFile(gcnew StreamWriter(filePath, append))
{}

FileLogger::~FileLogger()
{
    if (LogFile != nullptr)
        LogFile->Close();
}

void FileLogger::LogMessage(String^ message)
{
    if (LogFile != nullptr) {
        String^ dateTime = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");
        LogFile->WriteLine("[" + dateTime + "] [Info]: " + message);
        LogFile->Flush();
    }
}

