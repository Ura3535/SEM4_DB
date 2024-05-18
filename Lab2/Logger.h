#pragma once

namespace Logging
{
    using namespace System;
	using namespace System::IO;

	ref class Logger
	{
	public:
        Logger(String^ filePath);
        ~Logger();

		void LogMessage(String^ message);
	private:
		StreamWriter^ LogFile;
	};

}
