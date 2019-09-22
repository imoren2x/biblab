/*
 * dll.h
 *
 * Created on: 16/11/2010
 * Author: imoren2x
 */

#ifndef DLL_H_
#define DLL_H_
	#if BUILDING_DLL
	#define DLLIMPORT __declspec(dllexport)
	#else /* Not BUILDING_DLL */
	#define DLLIMPORT __declspec(dllimport)
	#endif /* Not BUILDING_DLL */

#endif /* DLL_H_ */
