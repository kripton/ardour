// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GDKMM_PIXBUFFORMAT_H
#define _GDKMM_PIXBUFFORMAT_H

#include <glibmm.h>

/* $Id$ */

/* Copyright (C) 2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <gdkmmconfig.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GdkPixbufFormat GdkPixbufFormat; }
#endif

namespace Gdk
{

class PixbufFormat
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef PixbufFormat CppObjectType;
  typedef GdkPixbufFormat BaseObjectType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


public:
  PixbufFormat();
  explicit PixbufFormat(const GdkPixbufFormat* gobject);
  virtual ~PixbufFormat();

  PixbufFormat(const PixbufFormat& src);
  PixbufFormat& operator=(const PixbufFormat& src);

  
  /** Returns the name of the format.
   * @return The name of the format. 
   * 
   * Since: 2.2.
   */
  Glib::ustring get_name() const;
  
  /** Returns a description of the format.
   * @return A description of the format.
   * 
   * Since: 2.2.
   */
  Glib::ustring get_description() const;
  
  /** Returns the mime types supported by the format.
   * @return A <tt>0</tt>-terminated array of mime types which must be freed with 
   * Glib::strfreev() when it is no longer needed.
   * 
   * Since: 2.2.
   */
  Glib::StringArrayHandle get_mime_types() const;
  
  /** Returns the filename extensions typically used for files in the 
   * given format.
   * @return A <tt>0</tt>-terminated array of filename extensions which must be
   * freed with Glib::strfreev() when it is no longer needed.
   * 
   * Since: 2.2.
   */
  Glib::StringArrayHandle get_extensions() const;
  
  /** Returns whether pixbufs can be saved in the given format.
   * @return Whether pixbufs can be saved in the given format.
   * 
   * Since: 2.2.
   */
  bool is_writable() const;
  
  
  /** Returns whether this image format is scalable. If a file is in a 
   * scalable format, it is preferable to load it at the desired size, 
   * rather than loading it at the default size and scaling the 
   * resulting pixbuf to the desired size.
   * @return Whether this image format is scalable.
   * 
   * Since: 2.6.
   */
  bool is_scalable() const;
  
  /** Returns whether this image format is disabled. See
   * gdk_pixbuf_format_set_disabled().
   * @return Whether this image format is disabled.
   * 
   * Since: 2.6.
   */
  bool is_disabled() const;
  
  /** Disables or enables an image format. If a format is disabled, 
   * gdk-pixbuf won't use the image loader for this format to load 
   * images. Applications can use this to avoid using image loaders 
   * with an inappropriate license, see gdk_pixbuf_format_get_license().
   * 
   * Since: 2.6
   * @param disabled <tt>true</tt> to disable the format @a format .
   */
  void set_disabled(bool disabled = true);
  
  /** Returns information about the license of the image loader
   * for the format. The returned string should be a shorthand for 
   * a wellknown license, e.g. "LGPL", "GPL", "QPL", "GPL/QPL",
   * or "other" to indicate some other license.
   * @return A string describing the license of @a format . 
   * 
   * Since: 2.6.
   */
  Glib::ustring get_license() const;

  /// Provides access to the underlying C GObject.
  GdkPixbufFormat*       gobj()       { return const_cast<GdkPixbufFormat*>(gobject_); }
  /// Provides access to the underlying C GObject.
  const GdkPixbufFormat* gobj() const { return gobject_; }

protected:
  const GdkPixbufFormat* gobject_;


};

} // namespace Gdk


#endif /* _GDKMM_PIXBUFFORMAT_H */
