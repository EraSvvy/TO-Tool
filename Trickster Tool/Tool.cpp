#include "Tool.h"

using namespace TOTool;

[STAThreadAttribute]

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Tool());
	return 1;
}