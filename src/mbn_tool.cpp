/**
* LICENSE PLACEHOLDER
*
* @file main.cpp
* @package OpenPST
* @brief program entry point
*
* @author Gassan Idriss <ghassani@gmail.com>
* @author Matteson Raab <mraabhimself@gmail.com>
*/

#include <QApplication>
#include <QMetaType>
#include "gui/mbn_tool_window.h"
#ifdef _WIN32
	#include <windows.h>
#endif

/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{

#if defined (_WIN32) && defined (DEBUG)
	AllocConsole();
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
#endif

	QApplication application(argc, argv);

    openpst::MbnToolWindow window;

	window.show();

	qRegisterMetaType<size_t>("size_t");

    return application.exec();
}