#pragma once

namespace Logging
{
    using namespace System;
	using namespace System::IO;

	ref class FileLogger
	{
	public:
		FileLogger(String^ filePath, bool append);
        ~FileLogger();

		void LogMessage(String^ message);
	private:
		StreamWriter^ LogFile;
	};

	static ref class Loggers {
	public:
		static FileLogger^ FileLog = gcnew FileLogger("C:\\Users\\ήπ³ι\\Desktop\\log.txt", false);
	};
}
