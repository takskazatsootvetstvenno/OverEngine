#ifndef APPLICATION_HPP
#define APPLICATION_HPP

namespace OverEngine{
	class Application_Engine
	{
	public:
		Application_Engine();
		virtual ~Application_Engine();
		Application_Engine(const Application_Engine&) = delete;
		Application_Engine(Application_Engine&&) = delete;
		Application_Engine& operator=(const Application_Engine&) = delete;
		Application_Engine& operator=(Application_Engine&&) = delete;

		virtual int start(unsigned int window_width, unsigned int window_height, const char* title);
		virtual void on_update() {}
	private:

	};
}
#endif // !APPLICATION_HPP