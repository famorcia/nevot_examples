#if 0
void use_CORBA_EVOT()
{
    // set strategies
    OrbSupport::StrategyList strategyList;
    // ... 

    // init the ORB.
    CORBA::ORB_var orb = Cdmw::OrbSupport::OrbSupport::ORB_init(argc, argv, strategyList);

    try
    {
        // init the service
        if (CosClock::init(orb.in(), argc, argv) == false)
        {
            std::cerr << ":>> can not init clock service!" << std::endl;
            return returnError;
        }

        // retrieve the POA ...
        CORBA::Object_var obj = orb->resolve_initial_references("RootPOA");                
        PortableServer::POA_var rootPOA = PortableServer::POA::_narrow(obj.in());
        PortableServer::POAManager_var poa_manager = rootPOA->the_POAManager();

        // ... and activate it
        poa_manager->activate();

        // retrive the clock ... 
        CORBA::Object_ptr clock_obj = CORBA::Object::_nil();
        clock_obj = orb->resolve_initial_references("LocalClock");
        CosClockService::Clock_var m_clock = CosClockService::Clock::_narrow(m_obj);

        // ... and finally, use it!
        TimeBase::TimeT system_time = m_clock->current_time();

    }
    catch(...)
    {
        std::cerr << "ClockService:>> Exception!" << std::endl;
    }
}


void use_ClockCatalog()
{
    try
    {
        // ... at least 30 lines of initialization code and then we can ...

        // ... retrive the clock catalog ... 
        CORBA::Object_ptr obj_ = CORBA::Object::_nil();
        obj_ = orb->resolve_initial_references("ClockService");
        CosClockService::ClockCatalog_var clock_catalog_ = CosClockService::ClockCatalog::_narrow(obj_);    

        // ... retrive the entry in the catalog ... 
        CosClockService::ClockCatalog::ClockEntry  entry;
        entry = clock_catalog_->get_entry("LocalExecutor");
        
        // ... use it!
        Executor_var executor = Executor::_narrow(entry->subject.in());
        TimeBase::TimeT local_time = executor->current_time();

    }
    catch(...)
    {
        std::cerr << "ClockService:>> Exception!" << std::endl;
    }
}
#endif


#if 0
#include "Example.hpp"
#include <Foundation/commonsvcs/nevot/NConfig.hpp>
#include <Foundation/commonsvcs/nevot/NEVoT.hpp>
#include <Foundation/commonsvcs/nevot/NClockCatalog.hpp>

using namespace Cdmw::CommonSvcs;





void use_CPP_NEVOT(int argc, char **& argv )
{
    // init the service
    nevot::NEVoT::init(argc, argv);
    // retrieve the current time
    nevot::NTimeBase::TimeT system_time nevot::NSystemClock::current_time();
}

void use_CPP_CLOCKCATALOG()
{
    // 1 line of initialization
    nevot::NClockEntry entry = nevot::NClockCatalog::get_entry("LocalExecutor");
    nevot::NTimeBase::TimeT local_time = entry.second->current_time();
    
}

Example::Example(void)
{
#if 0
    *  @todo Finish example
        *
        *  @code 
        *  // example of usage for retrieving clock from available entries
        *  // an useful list of names
        *  NClockNames clock_names;
    *  ClockCatalog::instance()->available_entries(clock_names);
    *  std::for_each(clock_names.begin(), clock_names.end(), ... add your operation ... );
    *  @endcode
#endif

}


Example::~Example(void)
{
}
#endif
