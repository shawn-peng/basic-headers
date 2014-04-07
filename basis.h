/*
 * basis.h
 *
 *  Created on: Apr 22, 2013
 *      Author: shawn
 */

#ifndef BASIS_H_
#define BASIS_H_

#include <iostream>
#include <vector>
#include <list>

using namespace std;

#ifdef DEBUGINFO_LEVEL3
#define DEBUGINFO_LEVEL2
#endif //DEBUGINFO_LEVEL3

#ifdef DEBUGINFO_LEVEL2
#define DEBUGINFO_LEVEL1
#endif //DEBUGINFO_LEVEL2

#ifdef DEBUGINFO_LEVEL1
#define DEBUGINFO_LEVEL0
//#else
//#ifdef _DEBUG
//#define DEBUGINFO_LEVEL0
//#endif //_DEBUG
#endif //DEBUGINFO_LEVEL1

namespace std
{

//const char* (*translatefuncp)()

template< typename T >
ostream & operator << ( ostream & out, const vector< T > & v )
{
	//for(vector<T>::iterator iter = v.front() ; iter!= v.end() ; iter++)
	typedef typename vector< T >::const_iterator iterator;
	cout<<"{"<<endl;
	for ( iterator iter = v.begin(); iter != v.end(); iter++ )
	{
		cout<<*iter<<","<<endl;
	}
	cout<<"}";
	return cout << endl;
}

template< typename T >
ostream & operator << ( ostream & out, const list< T > & v )
{
	//for(vector<T>::iterator iter = v.front() ; iter!= v.end() ; iter++)
	typedef typename list< T >::const_iterator iterator;
//	out<<"{"<<endl;
//	for ( iterator iter = v.begin(); iter != v.end(); iter++ )
//	{
//		out<<*iter<<",";
//	}
//	out<<"}";
	iterator iter = v.begin();
	out<<*iter++;
	while( iter != v.end() )
	{
		out<<" "<<*iter++;
	}
	return out;
}

}


#ifdef    DEBUGINFO_LEVEL0
	#ifndef   CUSTOM_DEBUGINFO_OSTREAM
		#define TRACE_DEBUGINFO_LEVEL0( obj ) do{ cout << obj; }while(0)
	#else  /* CUSTOM_DEBUGINFO_OSTREAM */
		#define TRACE_DEBUGINFO_LEVEL0( obj ) do{ CUSTOM_DEBUGINFO_OSTREAM << obj; }while(0)
	#endif /* CUSTOM_DEBUGINFO_OSTREAM */
#else  /* DEBUGINFO_LEVEL0 */
	#define TRACE_DEBUGINFO_LEVEL0( obj ) do{}while(0)
#endif /* DEBUGINFO_LEVEL0 */

#ifdef    DEBUGINFO_LEVEL1
	#ifndef   CUSTOM_DEBUGINFO_OSTREAM
		#define TRACE_DEBUGINFO_LEVEL1( obj ) do{ cout << obj; }while(0)
	#else  /* CUSTOM_DEBUGINFO_OSTREAM */
		#define TRACE_DEBUGINFO_LEVEL1( obj ) do{ CUSTOM_DEBUGINFO_OSTREAM << obj; }while(0)
	#endif /* CUSTOM_DEBUGINFO_OSTREAM */
#else  /* DEBUGINFO_LEVEL1 */
	#define TRACE_DEBUGINFO_LEVEL1( obj ) do{}while(0)
#endif /* DEBUGINFO_LEVEL1 */

#ifdef    DEBUGINFO_LEVEL2
	#ifndef   CUSTOM_DEBUGINFO_OSTREAM
		#define TRACE_DEBUGINFO_LEVEL2( obj ) do{ cout << obj; }while(0)
	#else  /* CUSTOM_DEBUGINFO_OSTREAM */
		#define TRACE_DEBUGINFO_LEVEL2( obj ) do{ CUSTOM_DEBUGINFO_OSTREAM << obj; }while(0)
	#endif /* CUSTOM_DEBUGINFO_OSTREAM */
#else  /* DEBUGINFO_LEVEL2 */
	#define TRACE_DEBUGINFO_LEVEL2( obj ) do{}while(0)
#endif /* DEBUGINFO_LEVEL2 */

#ifdef    DEBUGINFO_LEVEL3
	#ifndef   CUSTOM_DEBUGINFO_OSTREAM
		#define TRACE_DEBUGINFO_LEVEL3( obj ) do{ cout << obj; }while(0)
	#else  /* CUSTOM_DEBUGINFO_OSTREAM */
		#define TRACE_DEBUGINFO_LEVEL3( obj ) do{ CUSTOM_DEBUGINFO_OSTREAM << obj; }while(0)
	#endif /* CUSTOM_DEBUGINFO_OSTREAM */
#else  /* DEBUGINFO_LEVEL3 */
	#define TRACE_DEBUGINFO_LEVEL3( obj ) do{}while(0)
#endif /* DEBUGINFO_LEVEL3 */


#endif /* BASIS_H_ */
