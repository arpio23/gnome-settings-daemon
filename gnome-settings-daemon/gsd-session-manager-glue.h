/*
 * Generated by gdbus-codegen 2.51.4. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __GSD_SESSION_MANAGER_GLUE_H__
#define __GSD_SESSION_MANAGER_GLUE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.SessionManager */

#define GSD_TYPE_SESSION_MANAGER (gsd_session_manager_get_type ())
#define GSD_SESSION_MANAGER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GSD_TYPE_SESSION_MANAGER, GsdSessionManager))
#define GSD_IS_SESSION_MANAGER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GSD_TYPE_SESSION_MANAGER))
#define GSD_SESSION_MANAGER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GSD_TYPE_SESSION_MANAGER, GsdSessionManagerIface))

struct _GsdSessionManager;
typedef struct _GsdSessionManager GsdSessionManager;
typedef struct _GsdSessionManagerIface GsdSessionManagerIface;

struct _GsdSessionManagerIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_can_shutdown) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_clients) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_inhibitors) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_locale) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    gint arg_category);

  gboolean (*handle_inhibit) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_app_id,
    guint arg_toplevel_xid,
    const gchar *arg_reason,
    guint arg_flags);

  gboolean (*handle_initialization_error) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_message,
    gboolean arg_fatal);

  gboolean (*handle_is_autostart_condition_handled) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_condition);

  gboolean (*handle_is_inhibited) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    guint arg_flags);

  gboolean (*handle_is_session_running) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_logout) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    guint arg_mode);

  gboolean (*handle_reboot) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_register_client) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_app_id,
    const gchar *arg_client_startup_id);

  gboolean (*handle_setenv) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_variable,
    const gchar *arg_value);

  gboolean (*handle_shutdown) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_uninhibit) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    guint arg_inhibit_cookie);

  gboolean (*handle_unregister_client) (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_client_id);

  guint  (*get_inhibited_actions) (GsdSessionManager *object);

  gboolean  (*get_session_is_active) (GsdSessionManager *object);

  const gchar * (*get_session_name) (GsdSessionManager *object);

  void (*client_added) (
    GsdSessionManager *object,
    const gchar *arg_id);

  void (*client_removed) (
    GsdSessionManager *object,
    const gchar *arg_id);

  void (*inhibitor_added) (
    GsdSessionManager *object,
    const gchar *arg_id);

  void (*inhibitor_removed) (
    GsdSessionManager *object,
    const gchar *arg_id);

  void (*session_over) (
    GsdSessionManager *object);

  void (*session_running) (
    GsdSessionManager *object);

};

GType gsd_session_manager_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gsd_session_manager_interface_info (void);
guint gsd_session_manager_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gsd_session_manager_complete_setenv (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

void gsd_session_manager_complete_get_locale (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *value);

void gsd_session_manager_complete_initialization_error (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

void gsd_session_manager_complete_register_client (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *client_id);

void gsd_session_manager_complete_unregister_client (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

void gsd_session_manager_complete_inhibit (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    guint inhibit_cookie);

void gsd_session_manager_complete_uninhibit (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

void gsd_session_manager_complete_is_inhibited (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    gboolean is_inhibited);

void gsd_session_manager_complete_get_clients (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *clients);

void gsd_session_manager_complete_get_inhibitors (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *inhibitors);

void gsd_session_manager_complete_is_autostart_condition_handled (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    gboolean handled);

void gsd_session_manager_complete_shutdown (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

void gsd_session_manager_complete_reboot (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

void gsd_session_manager_complete_can_shutdown (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    gboolean is_available);

void gsd_session_manager_complete_logout (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation);

void gsd_session_manager_complete_is_session_running (
    GsdSessionManager *object,
    GDBusMethodInvocation *invocation,
    gboolean running);



/* D-Bus signal emissions functions: */
void gsd_session_manager_emit_client_added (
    GsdSessionManager *object,
    const gchar *arg_id);

void gsd_session_manager_emit_client_removed (
    GsdSessionManager *object,
    const gchar *arg_id);

void gsd_session_manager_emit_inhibitor_added (
    GsdSessionManager *object,
    const gchar *arg_id);

void gsd_session_manager_emit_inhibitor_removed (
    GsdSessionManager *object,
    const gchar *arg_id);

void gsd_session_manager_emit_session_running (
    GsdSessionManager *object);

void gsd_session_manager_emit_session_over (
    GsdSessionManager *object);



/* D-Bus method calls: */
void gsd_session_manager_call_setenv (
    GsdSessionManager *proxy,
    const gchar *arg_variable,
    const gchar *arg_value,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_setenv_finish (
    GsdSessionManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_setenv_sync (
    GsdSessionManager *proxy,
    const gchar *arg_variable,
    const gchar *arg_value,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_get_locale (
    GsdSessionManager *proxy,
    gint arg_category,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_get_locale_finish (
    GsdSessionManager *proxy,
    gchar **out_value,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_get_locale_sync (
    GsdSessionManager *proxy,
    gint arg_category,
    gchar **out_value,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_initialization_error (
    GsdSessionManager *proxy,
    const gchar *arg_message,
    gboolean arg_fatal,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_initialization_error_finish (
    GsdSessionManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_initialization_error_sync (
    GsdSessionManager *proxy,
    const gchar *arg_message,
    gboolean arg_fatal,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_register_client (
    GsdSessionManager *proxy,
    const gchar *arg_app_id,
    const gchar *arg_client_startup_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_register_client_finish (
    GsdSessionManager *proxy,
    gchar **out_client_id,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_register_client_sync (
    GsdSessionManager *proxy,
    const gchar *arg_app_id,
    const gchar *arg_client_startup_id,
    gchar **out_client_id,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_unregister_client (
    GsdSessionManager *proxy,
    const gchar *arg_client_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_unregister_client_finish (
    GsdSessionManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_unregister_client_sync (
    GsdSessionManager *proxy,
    const gchar *arg_client_id,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_inhibit (
    GsdSessionManager *proxy,
    const gchar *arg_app_id,
    guint arg_toplevel_xid,
    const gchar *arg_reason,
    guint arg_flags,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_inhibit_finish (
    GsdSessionManager *proxy,
    guint *out_inhibit_cookie,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_inhibit_sync (
    GsdSessionManager *proxy,
    const gchar *arg_app_id,
    guint arg_toplevel_xid,
    const gchar *arg_reason,
    guint arg_flags,
    guint *out_inhibit_cookie,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_uninhibit (
    GsdSessionManager *proxy,
    guint arg_inhibit_cookie,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_uninhibit_finish (
    GsdSessionManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_uninhibit_sync (
    GsdSessionManager *proxy,
    guint arg_inhibit_cookie,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_is_inhibited (
    GsdSessionManager *proxy,
    guint arg_flags,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_is_inhibited_finish (
    GsdSessionManager *proxy,
    gboolean *out_is_inhibited,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_is_inhibited_sync (
    GsdSessionManager *proxy,
    guint arg_flags,
    gboolean *out_is_inhibited,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_get_clients (
    GsdSessionManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_get_clients_finish (
    GsdSessionManager *proxy,
    gchar ***out_clients,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_get_clients_sync (
    GsdSessionManager *proxy,
    gchar ***out_clients,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_get_inhibitors (
    GsdSessionManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_get_inhibitors_finish (
    GsdSessionManager *proxy,
    gchar ***out_inhibitors,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_get_inhibitors_sync (
    GsdSessionManager *proxy,
    gchar ***out_inhibitors,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_is_autostart_condition_handled (
    GsdSessionManager *proxy,
    const gchar *arg_condition,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_is_autostart_condition_handled_finish (
    GsdSessionManager *proxy,
    gboolean *out_handled,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_is_autostart_condition_handled_sync (
    GsdSessionManager *proxy,
    const gchar *arg_condition,
    gboolean *out_handled,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_shutdown (
    GsdSessionManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_shutdown_finish (
    GsdSessionManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_shutdown_sync (
    GsdSessionManager *proxy,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_reboot (
    GsdSessionManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_reboot_finish (
    GsdSessionManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_reboot_sync (
    GsdSessionManager *proxy,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_can_shutdown (
    GsdSessionManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_can_shutdown_finish (
    GsdSessionManager *proxy,
    gboolean *out_is_available,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_can_shutdown_sync (
    GsdSessionManager *proxy,
    gboolean *out_is_available,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_logout (
    GsdSessionManager *proxy,
    guint arg_mode,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_logout_finish (
    GsdSessionManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_logout_sync (
    GsdSessionManager *proxy,
    guint arg_mode,
    GCancellable *cancellable,
    GError **error);

void gsd_session_manager_call_is_session_running (
    GsdSessionManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_session_manager_call_is_session_running_finish (
    GsdSessionManager *proxy,
    gboolean *out_running,
    GAsyncResult *res,
    GError **error);

gboolean gsd_session_manager_call_is_session_running_sync (
    GsdSessionManager *proxy,
    gboolean *out_running,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *gsd_session_manager_get_session_name (GsdSessionManager *object);
gchar *gsd_session_manager_dup_session_name (GsdSessionManager *object);
void gsd_session_manager_set_session_name (GsdSessionManager *object, const gchar *value);

gboolean gsd_session_manager_get_session_is_active (GsdSessionManager *object);
void gsd_session_manager_set_session_is_active (GsdSessionManager *object, gboolean value);

guint gsd_session_manager_get_inhibited_actions (GsdSessionManager *object);
void gsd_session_manager_set_inhibited_actions (GsdSessionManager *object, guint value);


/* ---- */

#define GSD_TYPE_SESSION_MANAGER_PROXY (gsd_session_manager_proxy_get_type ())
#define GSD_SESSION_MANAGER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GSD_TYPE_SESSION_MANAGER_PROXY, GsdSessionManagerProxy))
#define GSD_SESSION_MANAGER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GSD_TYPE_SESSION_MANAGER_PROXY, GsdSessionManagerProxyClass))
#define GSD_SESSION_MANAGER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GSD_TYPE_SESSION_MANAGER_PROXY, GsdSessionManagerProxyClass))
#define GSD_IS_SESSION_MANAGER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GSD_TYPE_SESSION_MANAGER_PROXY))
#define GSD_IS_SESSION_MANAGER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GSD_TYPE_SESSION_MANAGER_PROXY))

typedef struct _GsdSessionManagerProxy GsdSessionManagerProxy;
typedef struct _GsdSessionManagerProxyClass GsdSessionManagerProxyClass;
typedef struct _GsdSessionManagerProxyPrivate GsdSessionManagerProxyPrivate;

struct _GsdSessionManagerProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GsdSessionManagerProxyPrivate *priv;
};

struct _GsdSessionManagerProxyClass
{
  GDBusProxyClass parent_class;
};

GType gsd_session_manager_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GsdSessionManagerProxy, g_object_unref)
#endif

void gsd_session_manager_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GsdSessionManager *gsd_session_manager_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GsdSessionManager *gsd_session_manager_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gsd_session_manager_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GsdSessionManager *gsd_session_manager_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GsdSessionManager *gsd_session_manager_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GSD_TYPE_SESSION_MANAGER_SKELETON (gsd_session_manager_skeleton_get_type ())
#define GSD_SESSION_MANAGER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GSD_TYPE_SESSION_MANAGER_SKELETON, GsdSessionManagerSkeleton))
#define GSD_SESSION_MANAGER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GSD_TYPE_SESSION_MANAGER_SKELETON, GsdSessionManagerSkeletonClass))
#define GSD_SESSION_MANAGER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GSD_TYPE_SESSION_MANAGER_SKELETON, GsdSessionManagerSkeletonClass))
#define GSD_IS_SESSION_MANAGER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GSD_TYPE_SESSION_MANAGER_SKELETON))
#define GSD_IS_SESSION_MANAGER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GSD_TYPE_SESSION_MANAGER_SKELETON))

typedef struct _GsdSessionManagerSkeleton GsdSessionManagerSkeleton;
typedef struct _GsdSessionManagerSkeletonClass GsdSessionManagerSkeletonClass;
typedef struct _GsdSessionManagerSkeletonPrivate GsdSessionManagerSkeletonPrivate;

struct _GsdSessionManagerSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GsdSessionManagerSkeletonPrivate *priv;
};

struct _GsdSessionManagerSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gsd_session_manager_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GsdSessionManagerSkeleton, g_object_unref)
#endif

GsdSessionManager *gsd_session_manager_skeleton_new (void);


G_END_DECLS

#endif /* __GSD_SESSION_MANAGER_GLUE_H__ */
