/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */

/*
 * Copyright (C) 2015 Red Hat
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef META_MONITOR_MANAGER_H
#define META_MONITOR_MANAGER_H

#include <glib-object.h>

typedef struct _MetaMonitorManagerClass    MetaMonitorManagerClass;
typedef struct _MetaMonitorManager         MetaMonitorManager;

GType meta_monitor_manager_get_type (void);

MetaMonitorManager *meta_monitor_manager_get  (void);

gint meta_monitor_manager_get_monitor_for_output (MetaMonitorManager *manager,
                                                  guint               id);

gboolean meta_monitor_manager_get_is_builtin_display_on (MetaMonitorManager *manager);

#endif /* META_MONITOR_MANAGER_H */
