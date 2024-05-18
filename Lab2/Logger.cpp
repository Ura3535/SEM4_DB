#include "Logger.h"

using namespace Logging;

Logger::Logger(String^ filePath)
    : LogFile(gcnew StreamWriter(filePath, true))
{}

Logger::~Logger()
{
    if (LogFile != nullptr)
        LogFile->Close();
}

void Logger::LogMessage(String^ message)
{
    if (LogFile != nullptr) {
        String^ dateTime = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");
        LogFile->WriteLine("[" + dateTime + "] [Info]: " + message);
        LogFile->Flush();
    }
}

