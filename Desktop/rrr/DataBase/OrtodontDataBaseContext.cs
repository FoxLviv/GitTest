using System;
using System.Collections.Generic;
using System.Text;
using Microsoft.EntityFrameworkCore;
using DataBase.Entities;

namespace DataBase
{
   public class OrtodontDataBaseContext:DbContext
    {
        #region Dbsets
        DbSet<UserEntities> Users { set; get; }
        DbSet<NewsEntities> News { get; set; }


        #endregion



        public OrtodontDataBaseContext(DbContextOptions<OrtodontDataBaseContext> options):base (options)
        {

        }

    }
}
