/*
 *  vst3sdksources.cpp
 *  uidescription test
 *
 *  Created by Arne Scheffler on 9/11/10.
 *  Copyright 2010 Arne Scheffler. All rights reserved.
 *
 */


#include "public.sdk/source/vst/vst2wrapper/vst2wrapper.sdk.cpp"
#include "public.sdk/source/common/pluginview.cpp"
#include "public.sdk/source/main/pluginfactoryvst3.cpp"
#include "public.sdk/source/vst3stdsdk.cpp"
#include "public.sdk/source/vst/vstguieditor.cpp"
#include "public.sdk/source/vst/vstinitiids.cpp"
#include "base/source/baseiids.cpp"
#include "base/source/classfactory.cpp"
#include "base/source/fatomic.cpp"
#include "base/source/fbuffer.cpp"
#include "base/source/fdebug.cpp"
#include "base/source/fobject.cpp"
#include "base/source/fstreamer.cpp"
#include "base/source/fstring.cpp"
#include "base/source/fthread.cpp"
#include "base/source/timer.cpp"
#include "base/source/updatehandler.cpp"
#include "pluginterfaces/base/conststringtable.cpp"
#include "pluginterfaces/base/funknown.cpp"
#include "pluginterfaces/base/ustring.cpp"

#if MAC
	#include "public.sdk/source/main/macmain.cpp"
#endif
#if WINDOWS
	#include "public.sdk/source/main/dllmain.cpp"
#endif
