/**
 * \file bs_report_thread.h
 * \brief thread_log declaration
 * \author Sergey Miryanov
 * \date 14.08.2009
 * */
#ifndef BS_REPORT_THREAD_H_
#define BS_REPORT_THREAD_H_

namespace blue_sky {

	class BS_API thread_log {
		friend struct bs_private::thread_log_wrapper;
	public:
		typedef smart_ptr<bs_log>               sp_log;
		typedef std::map<int, sp_log>           mlog;
		typedef smart_ptr<mlog>                 sp_mlog;
		typedef mlog::const_iterator            const_iterator;
		typedef mlog::iterator                  iterator;

		/*BLUE_SKY_SIGNALS_DECL_BEGIN(thread_log)
			log_channel_added,
			log_channel_removed,
			log_stream_added,
			log_stream_removed,
		BLUE_SKY_SIGNALS_DECL_END*/

		sp_channel add_log_channel(const std::string&);
		sp_channel add_log_channel(const sp_channel&);
		bool add_log_stream(const std::string&,const sp_stream&);
		bool rem_log_channel(const std::string&);
		bool rem_log_stream(const std::string&,const sp_stream&);

		void kill();

		locked_channel operator[](const std::string&);

		thread_log();
		//thread_log(const thread_log&);

	private:
		sp_mlog logs;
	};

} // namespace blue_sky


#endif // #ifndef BS_REPORT_THREAD_H_

