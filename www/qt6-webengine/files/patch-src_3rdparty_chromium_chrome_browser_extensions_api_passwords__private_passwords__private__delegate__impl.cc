--- src/3rdparty/chromium/chrome/browser/extensions/api/passwords_private/passwords_private_delegate_impl.cc.orig	2023-10-11 18:22:24 UTC
+++ src/3rdparty/chromium/chrome/browser/extensions/api/passwords_private/passwords_private_delegate_impl.cc
@@ -603,7 +603,7 @@ void PasswordsPrivateDelegateImpl::OnFetchingFamilyMem
 }
 
 void PasswordsPrivateDelegateImpl::OsReauthTimeoutCall() {
-#if !BUILDFLAG(IS_LINUX)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_BSD)
   PasswordsPrivateEventRouter* router =
       PasswordsPrivateEventRouterFactory::GetForProfile(profile_);
   if (router) {
