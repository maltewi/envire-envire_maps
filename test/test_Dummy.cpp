#include <boost/test/unit_test.hpp>
#include <envire_maps/Dummy.hpp>

using namespace envire_maps;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    envire_maps::DummyClass dummy;
    dummy.welcome();
}
