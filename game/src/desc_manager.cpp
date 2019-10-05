///Add
#include <boost/algorithm/string.hpp>

//Find
		if (d->GetCharacter() && !strcmp(d->GetCharacter()->GetName(), m_name))
			return true;
		return false;
		
///Change
#if defined(FIXDESCFINDPC)
		return d->GetCharacter() && boost::algorithm::to_lower_copy(std::string(d->GetCharacter()->GetName())) == boost::algorithm::to_lower_copy(std::string(m_name));
#else
		if (d->GetCharacter() && !strcmp(d->GetCharacter()->GetName(), m_name))
			return true;
		return false;
#endif
